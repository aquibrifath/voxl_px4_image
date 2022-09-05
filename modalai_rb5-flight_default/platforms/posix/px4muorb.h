#ifndef _PX4MUORB_H
#define _PX4MUORB_H
#include <AEEStdDef.h>
#include <remote.h>

#ifndef __QAIC_HEADER
#define __QAIC_HEADER(ff) ff
#endif //__QAIC_HEADER

#ifndef __QAIC_HEADER_EXPORT
#define __QAIC_HEADER_EXPORT
#endif // __QAIC_HEADER_EXPORT

#ifndef __QAIC_HEADER_ATTRIBUTE
#define __QAIC_HEADER_ATTRIBUTE
#endif // __QAIC_HEADER_ATTRIBUTE

#ifndef __QAIC_IMPL
#define __QAIC_IMPL(ff) ff
#endif //__QAIC_IMPL

#ifndef __QAIC_IMPL_EXPORT
#define __QAIC_IMPL_EXPORT
#endif // __QAIC_IMPL_EXPORT

#ifndef __QAIC_IMPL_ATTRIBUTE
#define __QAIC_IMPL_ATTRIBUTE
#endif // __QAIC_IMPL_ATTRIBUTE
#ifdef __cplusplus
extern "C" {
#endif
#if !defined(__QAIC_STRING1_OBJECT_DEFINED__) && !defined(__STRING1_OBJECT__)
#define __QAIC_STRING1_OBJECT_DEFINED__
#define __STRING1_OBJECT__
typedef struct _cstring1_s {
   char* data;
   int dataLen;
} _cstring1_t;

#endif /* __QAIC_STRING1_OBJECT_DEFINED__ */
/**
    * interface method to start the uorb service and initialize the muorb
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_orb_initialize)(void) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to set an offset to hrt_absolute_time on the DSP.
    *
    * @param time_diff_us: time difference of the DSP clock to Linux clock.
    *   A positive number means the Linux clock is ahead of the DSP one.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_set_absolute_time_offset)(int time_diff_us) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to request hrt_absolute_time on the DSP.
    * @param time_us: pointer to time in us
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_get_absolute_time)(uint64* time_us) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to update param for krait.
    *
    * @param param: param index.
    * @param value: param value.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_param_update_to_shmem)(unsigned int param, const unsigned char* value, int valueLen) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to update index for krait.
    * @param data: param index array.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_param_update_index_from_shmem)(unsigned char* data, int dataLen) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to get param value for krait.
    *
    * @param param: param index.
    * @param value: param value.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_param_update_value_from_shmem)(unsigned int param, unsigned char* value, int valueLen) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface called from krait to inform of a published topic.
    * @param topic_name: name of the topic being advertised
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_topic_advertised)(const char* topic_name) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface called from krait to inform of a published topic.
    * @param topic_name: name of the topic being advertised
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_topic_unadvertised)(const char* topic_name) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to add a subscriber to the identified topic
    * @param topic_name
    * @return status
    *   0 == success
    *   all others is a failure.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_add_subscriber)(const char* topic_name) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to remove a subscriber for the identified topic.
    * @param topic_name
    * @return status
    *   0 == success
    *   all others is a failure.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_remove_subscriber)(const char* topic_name) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface called from krait for topic data.
    * @param topic_name
    * @param data
    *   a sequence of bytes for the passed data stream.
    *   as per the HExagon Documention, the max size of this stream is 255 bytes.
    * @return status
    *   0 == success
    *   all others is a failure.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_send_topic_data)(const char* topic_name, const unsigned char* data, int dataLen) __QAIC_HEADER_ATTRIBUTE;
/**
    * Inteface to check if there are subscribers on the remote adsp client
    * This inteface is required as the krait app can be restarted without adsp
    * being re-started.  In this scenario the krait app does not know if there
    * is subscriber on the remote end(ie adsp).
    * @param topic_name
    *   The name of the topic for which the subscription needs to be checked.
    * @param rout int status
    *   The status of the subscription, 0=no-subscribers, 1 = more than one subscriber.
    * @return status
    *   0 == success
    *   all others is a failure.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_is_subscriber_present)(const char* topic_name, int* status) __QAIC_HEADER_ATTRIBUTE;
/**
    * Interface to receive data from adsp.  Since there is only one interface, the different message
    * types are identified by the msg_type field.
    * @param msg_type
    *   The possible values are:
    *   1 ==> add_subscriber
    *   2 ==> remove_subscriber
    *   3 ==> recieve_topic_data
    *   4 ==> advertised_topic
    * @note: for message types, 1 & 2, the data pointer returned is null with length of 0.
    * @param topic_name
    *   The topic being returned.
    * @param data
    *   the data stream
    * @param bytes_returned
    *   The number of bytes returned in the byte buffer.
    * @return status
    *   0 == success
    *   all others is a failure.
    */
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_receive_msg)(int* msg_type, char* topic_name, int topic_nameLen, unsigned char* data, int dataLen, int* bytes_returned) __QAIC_HEADER_ATTRIBUTE;
/**
    * Since the receive_msg is a blocking call, the client will not be able to peform a clean shutdown.  Calling this
    * function will unblock the receive msg an return an error code.
    * Ideally this should be implemented as a timeout for the #receive_msg call.
    * @param none
    * @return status
    *    0 = success
    *    all others is a failure.
    **/
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_unblock_recieve_msg)(void) __QAIC_HEADER_ATTRIBUTE;
/**
     * This interface will perform a bulk read from the adsp and return the data buffer.
     * The structure of the messages is as follows
     * +----------------+-----------+---------------+----------+----------------+
     * | Topic Name Len | datal_len |TopicName(nullterminated) |   data bytes   |
     * +----------------+-----------+---------------+----------+----------------+
     * |<-- 2 bytes  -->|<-2bytes-> |<-- topicnamelen bytes -->|<-datalenbytes->|
     * +----------------+---------------------------+----------+----------------+
     * @param data
     *    The output buffer where the data needs to be copied
     * @param bytes_returned
     *    The number of bytes the buffer is filled up by.
     * @param topic_count
     *    The numbe of topics filled in the buffer.
     * @return status
     *    0 = success
     *    all others is a failure.
     **/
__QAIC_HEADER_EXPORT AEEResult __QAIC_HEADER(px4muorb_receive_bulk_data)(unsigned char* data, int dataLen, int* bytes_returned, int* topic_count) __QAIC_HEADER_ATTRIBUTE;
#ifdef __cplusplus
}
#endif
#endif //_PX4MUORB_H
