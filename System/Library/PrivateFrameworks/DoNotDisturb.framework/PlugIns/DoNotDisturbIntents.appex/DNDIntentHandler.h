/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/PlugIns/DoNotDisturbIntents.appex/DoNotDisturbIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INExtension.h>
#import <DoNotDisturbIntents/DNDToggleDoNotDisturbIntentHandling.h>

@class NSString;

@interface DNDIntentHandler : INExtension <DNDToggleDoNotDisturbIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)handleToggleDoNotDisturb:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
