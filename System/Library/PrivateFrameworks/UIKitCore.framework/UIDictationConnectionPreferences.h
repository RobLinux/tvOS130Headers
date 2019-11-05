/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject {

	AFPreferences* _afPreferences;

}

@property (nonatomic,retain) AFPreferences * afPreferences;              //@synthesize afPreferences=_afPreferences - In the implementation block
+(id)sharedInstance;
-(id)languageCode;
-(BOOL)dictationIsEnabled;
-(BOOL)suppressDictationOptIn;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(id)initSingleton;
-(AFPreferences *)afPreferences;
-(void)setAfPreferences:(AFPreferences *)arg1 ;
-(void)afPreferencesChanged:(id)arg1 ;
-(id)dictationSLSEnabledLanguages;
@end

