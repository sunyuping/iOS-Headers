/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct HTTPServer {
    struct {
        unsigned int serverSize;
        unsigned int connectionSize;
        void *doServerFree;
        void *doServerStart;
        void *doServerStop;
        void *doConnectionInit;
        void *doConnectionFree;
        void *doProcessRequest;
        void *doInitResponse;
        int listenerPort;
        int socketBufferSize;
        int qos;
        void *userData;
    } config;
    struct dispatch_queue_s *serverQueue;
    struct dispatch_semaphore_s *stopSem;
    int listenerPort;
    CDStruct_117c5d16 listenerIPv4;
    CDStruct_117c5d16 listenerIPv6;
    struct HTTPServerConnection *connectionList;
    unsigned int lastConnectionID;
    struct LogCategory *ucatRequest;
    struct LogCategory *ucatResponse;
    struct LogCategory *ucatConnections;
};

struct HTTPServerConnection;

struct LogCategory;

struct MediaControlServerImp {
    struct HTTPServer _field1;
    struct {
        void *userData;
        void *actionFunc;
        void *photoDataFunc;
        void *photoFileFunc;
        void *presentFunc;
        void *copyPropertyFunc;
        void *setPropertyFunc;
        void *copySlideshowFeaturesFunc;
        void *copySlideshowInfoFunc;
        void *setSlideshowInfoFunc;
        void *playFunc;
        void *stopFunc;
        void *rateSetFunc;
        void *scrubGetFunc;
        void *scrubSetFunc;
        void *volumeGetFunc;
        void *volumeSetFunc;
        void *playbackInfoFunc;
    } _field2;
    unsigned int _field3;
    unsigned char _field4[6];
    struct _DNSServiceRef_t *_field5;
    char _field6[16];
    char *_field7;
    unsigned char _field8;
    unsigned int _field9;
};

struct _DNSServiceRef_t;

struct dispatch_queue_s;

struct dispatch_semaphore_s;

struct dispatch_source_s;

#pragma mark Typedef'd Structures

typedef struct {
    struct dispatch_source_s *source;
    int socket;
    struct HTTPServer *server;
} CDStruct_117c5d16;

