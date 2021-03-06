//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

// Ambiguous groups
typedef struct {
    unsigned int position:1;
    unsigned int timestamp:1;
    unsigned int type:1;
} CDStruct_dd13975a;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
// UUID: 0C4ECB78-F43A-3A69-B320-F61324AD491C
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1738.58.0.19.4
//            Minimum iOS version: 8.2.0
//                    SDK version: 8.2.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol SYObject <NSObject>
- (NSString *)syncId;
@end

@protocol SYSerialization <NSObject>
- (id <SYObject>)SYObjectWithData:(NSData *)arg1;
- (NSData *)dataWithSYObject:(id <SYObject>)arg1;
@end

@protocol SYStoreDelegate <NSObject>
- (void)syncStore:(SYStore *)arg1 objectDeleted:(id <SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectUpdated:(id <SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectAdded:(id <SYObject>)arg2;

@optional
- (void)syncStoreEnqueuedAllFullSyncMessages:(SYStore *)arg1 context:(NSDictionary *)arg2;
- (void)syncStore:(SYStore *)arg1 encounteredErrorInFullSync:(NSError *)arg2;
- (_Bool)syncStoreShouldDeleteRemoteObjectsOnFailedFullSync:(SYStore *)arg1;
- (long long (^)(NSMutableArray *, id *))beginSyncingAllObjectsForStore:(SYStore *)arg1;
- (NSArray *)syncStoreAllObjects:(SYStore *)arg1;
- (void)syncStore:(SYStore *)arg1 sentMessageWithContext:(NSDictionary *)arg2;
- (void)syncStore:(SYStore *)arg1 encounteredError:(NSError *)arg2 context:(NSDictionary *)arg3;
- (_Bool)syncStoreShouldPerformInitialFullSync:(SYStore *)arg1;
- (void)syncStore:(SYStore *)arg1 peerFinishedProcessingMessageWithContext:(NSDictionary *)arg2;
- (void)syncStoreDidUnpair:(SYStore *)arg1;
- (void)syncStoreDidSetupAfterPairing:(SYStore *)arg1;
- (void)syncStoreAllObjectsDeleted:(SYStore *)arg1;
- (void)syncStoreDidCompleteFullSync:(SYStore *)arg1;
- (void)syncStoreDidUpdate:(SYStore *)arg1;
- (void)syncStoreWillUpdate:(SYStore *)arg1 objectCount:(unsigned long long)arg2;
- (void)syncStoreWillUpdate:(SYStore *)arg1;
@end

@interface MSPSerializer : NSObject <SYSerialization>
{
}

- (id)SYObjectWithData:(id)arg1;
- (id)dataWithSYObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSPDroppedPin : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_latLng;
    GEOMapRegion *_mapRegion;
}

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasLatLng;

@end

@interface MSPCompanionSyncedItem : PBCodable <SYObject, NSCopying>
{
    PBUnknownFields *_unknownFields;
    MSPBookmarkStorage *_bookmark;
    MSPPinStorage *_pin;
    MSPSearchRequestStorage *_searchRequest;
    NSString *_syncId;
}

@property(retain, nonatomic) MSPSearchRequestStorage *searchRequest; // @synthesize searchRequest=_searchRequest;
@property(retain, nonatomic) MSPPinStorage *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) MSPBookmarkStorage *bookmark; // @synthesize bookmark=_bookmark;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSearchRequest;
@property(readonly, nonatomic) _Bool hasPin;
@property(readonly, nonatomic) _Bool hasBookmark;
@property(readonly, nonatomic) _Bool hasSyncId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

@interface MSPDirectionsSearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

@interface MSPPinStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDroppedPin *_droppedPin;
    NSString *_identifier;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPin;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

@interface MSPPin : PBCodable <NSCopying>
{
    MSPDroppedPin *_droppedPin;
}

@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPin;

@end

@interface MSPRouteBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property(retain, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRouteRequestStorage;

@end

@interface MSPQuerySearch : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_language;
    NSString *_locationDisplayString;
    GEOMapRegion *_mapRegion;
    NSString *_query;
}

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *locationDisplayString; // @synthesize locationDisplayString=_locationDisplayString;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(readonly, nonatomic) _Bool hasLocationDisplayString;
@property(readonly, nonatomic) _Bool hasQuery;

@end

@interface MSPSearchRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPQuerySearch *_querySearch;
    int _searchType;
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int searchType:1;
    } _has;
}

@property(retain, nonatomic) MSPDirectionsSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(retain, nonatomic) MSPQuerySearch *querySearch; // @synthesize querySearch=_querySearch;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDirectionsSearch;
@property(readonly, nonatomic) _Bool hasQuerySearch;
@property(nonatomic) _Bool hasPosition;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasSearchType;

@end

@interface MSPSyncManager : NSObject <SYStoreDelegate>
{
    SYStore *_store;
    _Bool _inUpdate;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_bookmarks;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
}

- (void).cxx_destruct;
- (void)completedPreparingSync;
- (void)completedSync;
- (void)updatedPin:(id)arg1;
- (void)updatedHistoryItem:(id)arg1;
- (void)updatedBookmark:(id)arg1;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (id)readHistory;
- (id)readPins;
- (id)readBookmarks;
- (void)notifyObservers;
- (void)updateHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)removeHistoryItem:(id)arg1 transaction:(id)arg2;
- (void)addHistoryItem:(id)arg1 transaction:(id)arg2;
- (id)history;
- (void)updatePin:(id)arg1 transaction:(id)arg2;
- (void)removePin:(id)arg1 transaction:(id)arg2;
- (void)addPin:(id)arg1 transaction:(id)arg2;
- (id)pins;
- (void)updateBookmark:(id)arg1 transaction:(id)arg2;
- (void)removeBookmark:(id)arg1 transaction:(id)arg2;
- (void)addBookmark:(id)arg1 transaction:(id)arg2;
- (id)bookmarks;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_removeBookmark:(id)arg1;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (void)_updateBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_addBookmark:(id)arg1;
- (id)_wrapHistoryItem:(id)arg1;
- (id)_wrapPin:(id)arg1;
- (id)_wrapBookmark:(id)arg1;
- (void)_updateFromDisk;
- (void)_notifyObservers;
- (void)transaction:(CDUnknownBlockType)arg1;
- (void)syncStoreDidCompleteFullSync:(id)arg1;
- (void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;
- (id)syncStoreAllObjects:(id)arg1;
- (void)syncStoreAllObjectsDeleted:(id)arg1;
- (void)syncStoreDidUpdate:(id)arg1;
- (void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned long long)arg2;
- (void)syncStoreWillUpdate:(id)arg1;
- (void)syncStore:(id)arg1 objectDeleted:(id)arg2;
- (void)syncStore:(id)arg1 objectUpdated:(id)arg2;
- (void)syncStore:(id)arg1 objectAdded:(id)arg2;
- (void)setNeedsFullSync;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSPPlaceBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_droppedPinCoordinate;
    GEOMapItemStorage *_mapItemStorage;
    int _origin;
    NSString *_title;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *droppedPinCoordinate; // @synthesize droppedPinCoordinate=_droppedPinCoordinate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOMapItemStorage *mapItemStorage; // @synthesize mapItemStorage=_mapItemStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDroppedPinCoordinate;
@property(readonly, nonatomic) _Bool hasTitle;
@property(nonatomic) _Bool hasOrigin;
@property(readonly, nonatomic) _Bool hasMapItemStorage;

@end

@interface MSPRegionBookmark : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_region;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GEOMapRegion *region; // @synthesize region=_region;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasRegion;

@end

@interface MSPBookmarkStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _position;
    double _timestamp;
    NSString *_identifier;
    MSPPlaceBookmark *_placeBookmark;
    MSPRegionBookmark *_regionBookmark;
    MSPRouteBookmark *_routeBookmark;
    int _type;
    CDStruct_dd13975a _has;
}

@property(retain, nonatomic) MSPRegionBookmark *regionBookmark; // @synthesize regionBookmark=_regionBookmark;
@property(retain, nonatomic) MSPRouteBookmark *routeBookmark; // @synthesize routeBookmark=_routeBookmark;
@property(retain, nonatomic) MSPPlaceBookmark *placeBookmark; // @synthesize placeBookmark=_placeBookmark;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRegionBookmark;
@property(readonly, nonatomic) _Bool hasRouteBookmark;
@property(readonly, nonatomic) _Bool hasPlaceBookmark;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

