/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:09:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSMutableArray, AWDCoreRoutineMapItem;

@interface AWDCoreRoutinePlace : PBCodable <NSCopying> {

	NSMutableArray* _distanceToOtherPlaces;
	AWDCoreRoutineMapItem* _mapItem;

}

@property (nonatomic,readonly) BOOL hasMapItem; 
@property (nonatomic,retain) AWDCoreRoutineMapItem * mapItem;                     //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * distanceToOtherPlaces;              //@synthesize distanceToOtherPlaces=_distanceToOtherPlaces - In the implementation block
+(Class)distanceToOtherPlacesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapItem:(AWDCoreRoutineMapItem *)arg1 ;
-(void)setDistanceToOtherPlaces:(NSMutableArray *)arg1 ;
-(void)addDistanceToOtherPlaces:(id)arg1 ;
-(unsigned long long)distanceToOtherPlacesCount;
-(void)clearDistanceToOtherPlaces;
-(id)distanceToOtherPlacesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMapItem;
-(AWDCoreRoutineMapItem *)mapItem;
-(NSMutableArray *)distanceToOtherPlaces;
@end

