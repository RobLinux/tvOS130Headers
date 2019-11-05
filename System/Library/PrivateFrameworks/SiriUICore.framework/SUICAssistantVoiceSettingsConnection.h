/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSettingsConnection.h>

@class NSMutableDictionary;

@interface SUICAssistantVoiceSettingsConnection : AFSettingsConnection {

	NSMutableDictionary* _cachedAvailableVoices;

}

@property (nonatomic,retain) NSMutableDictionary * cachedAvailableVoices;              //@synthesize cachedAvailableVoices=_cachedAvailableVoices - In the implementation block
+(id)titlesForLanguageIdentifiers:(id)arg1 ;
+(id)shortTitlesForLanguageIdentifiers:(id)arg1 deviceLanguageLocale:(id)arg2 ;
+(id)capitalizeFirstPartOfCountry:(id)arg1 ;
+(id)outputLanguageIdentifiers;
+(id)assistantLanguageTitlesDictionary;
-(id)getAvailableVoicesForLanguage:(id)arg1 ;
-(id)nonCacheAvailableVoicesForLanguage:(id)arg1 ;
-(BOOL)languageHasBothGender:(id)arg1 ;
-(id)getAvailableDialectsForLanguage:(id)arg1 ;
-(id)_regionForLanguageIdentifier:(id)arg1 ;
-(BOOL)languageHasCustomVoice:(id)arg1 ;
-(BOOL)languageHasVoiceSelection:(id)arg1 ;
-(id)dialectForLanguageIdentifier:(id)arg1 ;
-(void)setOutputVoiceLanguage:(id)arg1 gender:(long long)arg2 ;
-(NSMutableDictionary *)cachedAvailableVoices;
-(void)setCachedAvailableVoices:(NSMutableDictionary *)arg1 ;
@end
