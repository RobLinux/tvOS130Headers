/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPDPlaceCollection, GEOPDAttribution, GEOMapItemAttribution, NSData, NSString;

@interface GEOPlaceCollection : NSObject {

	GEOPDPlaceCollection* _collection;
	GEOPDAttribution* _dataAttribution;
	GEOMapItemAttribution* _attribution;

}

@property (nonatomic,readonly) NSData * storageData; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * actionURLString; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long placeCount; 
+(id)placeCollectionForData:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)muid;
-(void)loadAttribution;
-(id)initWithCollection:(id)arg1 attribution:(id)arg2 ;
-(unsigned long long)placeCount;
-(NSData *)storageData;
-(NSString *)actionURLString;
-(id)imageURLforSize:(CGSize)arg1 ;
@end

