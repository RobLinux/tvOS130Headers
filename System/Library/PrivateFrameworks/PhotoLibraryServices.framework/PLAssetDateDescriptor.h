/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSNumber;


@protocol PLAssetDateDescriptor <NSObject>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSDate * utcDate; 
@property (nonatomic,readonly) NSString * rawTimeZoneName; 
@property (nonatomic,readonly) NSNumber * rawTimeZoneOffsetValue; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@required
-(CLLocationCoordinate2D)coordinate;
-(NSString *)uuid;
-(id)localDateAndCreateIfNeededWithLocalDateCreator:(id)arg1;
-(NSDate *)utcDate;
-(NSString *)rawTimeZoneName;
-(NSNumber *)rawTimeZoneOffsetValue;

@end

