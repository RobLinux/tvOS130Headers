/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, GEOLatLng, NSData, NSString, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	GEOLatLng* _coordinate;
	NSData* _image;
	NSString* _mapScreenshotId;
	GEOPDViewportInfo* _viewportInfo;
	float _zoomLevel;
	struct {
		unsigned has_zoomLevel : 1;
		unsigned read_coordinate : 1;
		unsigned read_image : 1;
		unsigned read_mapScreenshotId : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_coordinate : 1;
		unsigned wrote_image : 1;
		unsigned wrote_mapScreenshotId : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_zoomLevel : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) NSData * image; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) float zoomLevel; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasMapScreenshotId; 
@property (nonatomic,retain) NSString * mapScreenshotId; 
+(BOOL)isValid:(id)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 region:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(GEOLatLng *)coordinate;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)image;
-(void)setImage:(NSData *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)_readCoordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasCoordinate;
-(float)zoomLevel;
-(BOOL)hasImage;
-(void)_readImage;
-(void)setZoomLevel:(float)arg1 ;
-(void)_readMapScreenshotId;
-(NSString *)mapScreenshotId;
-(void)setMapScreenshotId:(NSString *)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasZoomLevel;
-(BOOL)hasMapScreenshotId;
-(void)_setMapMode:(int)arg1 region:(id)arg2 ;
@end

