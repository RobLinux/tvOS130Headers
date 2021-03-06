/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOTelephonyInfo : NSObject
+(id)sharedInfo;
+(BOOL)hasCellularCapability;
-(id)init;
-(id)cellularCarrier;
-(id)cellularCarrierIfAvailable;
-(BOOL)isDeviceAuthorizedForCellular;
-(id)isDeviceAuthorizedForCellularIfAvailable;
-(BOOL)isMapsAuthorizedForCellular;
-(id)isMapsAuthorizedForCellularIfAvailable;
-(void)_updateMapsAuthed;
-(int)cellularDataStateIfAvailable;
@end

