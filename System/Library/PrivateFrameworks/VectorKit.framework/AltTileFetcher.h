/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class GEOTileLoader, NSString;

@interface AltTileFetcher : NSObject {

	GEOTileLoader* _geoTileLoader;
	retain_ptr<GEOVectorTileDecoder *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>* _vectorTileDecoder;
	unordered_map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyHashFunc, GEOTileKeyEqualsFunc, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > >* _keyToJobMap;
	Mutex* _mutex;
	unsigned _numDownloads;
	NSString* _tileLoaderClientIdentifier;

}
-(id)init;
-(void)dealloc;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)cancelJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(shared_ptr<altitude::GeoServicesLoadJob>*)getJobForKey:(const GEOTileKey*)arg1 ;
-(void)fetchDataForJob:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)updateJobPriority:(shared_ptr<altitude::GeoServicesLoadJob>*)arg1 ;
-(void)cancelRequests;
-(void)purgeExpired:(double)arg1 ;
@end
