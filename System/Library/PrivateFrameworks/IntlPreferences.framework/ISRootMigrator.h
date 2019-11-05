/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntlPreferences/ISMigrator.h>

@interface ISRootMigrator : ISMigrator {

	BOOL _isErase;

}

@property (assign,nonatomic) BOOL isErase;              //@synthesize isErase=_isErase - In the implementation block
-(BOOL)performMigration;
-(id)performMigrationForPreferences:(id)arg1 ;
-(id)performMigrationForUserPreferences:(id)arg1 systemPreferences:(id)arg2 ;
-(BOOL)isErase;
-(void)updateAppleLanguagesSchemaVersionToCurrent;
-(id)importPreferredLanguagesForPreferences:(id)arg1 ;
-(id)appendRegionalVariantsToLanguageIdentifiers:(id)arg1 regionCode:(id)arg2 ;
-(id)importPreferredLanguages_macOS_10_9_forPreferences:(id)arg1 ;
-(void)setIsErase:(BOOL)arg1 ;
@end

