/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK11 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK6 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)description;
-(id)_dictionaryRepresentation;
-(NSArray *)mapItems;
-(SCD_Struct_MK6)boundingRegion;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
@end

