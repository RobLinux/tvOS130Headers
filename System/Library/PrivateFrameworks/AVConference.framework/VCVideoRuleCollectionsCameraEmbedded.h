/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(id)description;
-(void)dealloc;
-(double)preferredAspectRatio;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(VCBitrateConfiguration*)bitrateConfiguration;
-(VCHardwareConfiguration*)hardwareConfigurationForPayload:(int)arg1 transportType:(unsigned char)arg2 ;
-(BOOL)setupVideoRulesForPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 formatList:(VCVideoFormat*)arg4 formatListCount:(unsigned)arg5 preferredFormat:(id)arg6 supportsHighDef:(BOOL*)arg7 ;
@end

