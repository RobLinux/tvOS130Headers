/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVSPreferences, NSString;

@interface TVSettingsPreferenceFacade : NSObject {

	TVSPreferences* _prefs;
	NSString* _domain;
	NSString* _containerPath;

}

@property (nonatomic,copy,readonly) NSString * domain;                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerPath;              //@synthesize containerPath=_containerPath - In the implementation block
-(NSString *)domain;
-(NSString *)containerPath;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithDomain:(id)arg1 notifyChanges:(BOOL)arg2 ;
-(id)_initWithDomain:(id)arg1 containerPath:(id)arg2 notifyChanges:(BOOL)arg3 ;
-(id)initWithDomain:(id)arg1 containerPath:(id)arg2 ;
@end

