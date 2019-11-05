/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(id)unpackBasicPoints:(id)arg1 ;
+(void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(SCD_Struct_GE37)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3 ;
+(id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3 ;
@end
