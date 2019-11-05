/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceClient : CoreCECDevice
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)resignActiveSource:(id*)arg1 ;
-(BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)refreshDevices:(id*)arg1 ;
-(BOOL)requestActiveSource:(id*)arg1 ;
@end

