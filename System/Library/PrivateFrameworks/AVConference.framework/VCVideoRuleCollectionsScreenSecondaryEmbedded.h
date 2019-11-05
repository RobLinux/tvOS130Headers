/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(unsigned)tilesPerFrame:(int)arg1 ;
-(id)initWithHardwareSettings:(id)arg1 ;
-(void)initSupportedPayloads;
-(BOOL)setupRules;
-(BOOL)setupH264Rules;
-(void)selectPreferredRule:(id)arg1 screenSize:(CGSize)arg2 ;
@end
