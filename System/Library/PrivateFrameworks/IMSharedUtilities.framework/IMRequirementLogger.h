/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMRequirementLogger : NSObject {

	unsigned char _loggingLevel;
	BOOL _throwFailures;
	const char* _categoryOverride;

}

@property (assign) unsigned char loggingLevel;                //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign) const char* categoryOverride;              //@synthesize categoryOverride=_categoryOverride - In the implementation block
@property (assign) BOOL throwFailures;                        //@synthesize throwFailures=_throwFailures - In the implementation block
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned char)loggingLevel;
-(void)updateSettingsFromUserDefaults;
-(void)setThrowFailures:(BOOL)arg1 ;
-(void)setLoggingLevel:(unsigned char)arg1 ;
-(BOOL)throwFailures;
-(const char*)categoryOverride;
-(void)setCategoryOverride:(const char*)arg1 ;
-(IMRequirementFailed_t)requirementDidFail:(const char*)arg1 ;
@end

