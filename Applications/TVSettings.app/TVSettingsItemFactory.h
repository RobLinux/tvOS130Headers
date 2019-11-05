/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString, TVSettingsPreferenceFacade;

@interface TVSettingsItemFactory : NSObject {

	NSBundle* _bundle;
	NSString* _plistName;
	NSString* _appIdentifier;
	TVSettingsPreferenceFacade* _preferenceFacade;

}

@property (nonatomic,retain) NSBundle * bundle;                                          //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) NSString * plistName;                                         //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier;                                     //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,retain) TVSettingsPreferenceFacade * preferenceFacade;              //@synthesize preferenceFacade=_preferenceFacade - In the implementation block
+(BOOL)_specifierSupported:(id)arg1 ;
+(long long)_keyboardTypeFromString:(id)arg1 ;
+(long long)_autocapitalizationTypeFromString:(id)arg1 ;
+(long long)_autocorrectionTypeFromString:(id)arg1 ;
-(NSBundle *)bundle;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(void)setBundle:(NSBundle *)arg1 ;
-(NSString *)plistName;
-(void)setPlistName:(NSString *)arg1 ;
-(id)initWithBundle:(id)arg1 appIdentifier:(id)arg2 containerPath:(id)arg3 plistName:(id)arg4 ;
-(id)groupFromSpecifierDictionary:(id)arg1 withItems:(id)arg2 ;
-(id)radioGroupFromSpecifierDictionary:(id)arg1 ;
-(id)childPaneItemFromSpecifierDictionary:(id)arg1 ;
-(id)multiValueItemFromSpecifierDictionary:(id)arg1 ;
-(id)textItemFromSpecifierDictionary:(id)arg1 ;
-(id)longTextItemFromSpecifierDictionary:(id)arg1 ;
-(id)toggleItemFromSpecifierDictionary:(id)arg1 ;
-(id)titleItemFromSpecifierDictionary:(id)arg1 ;
-(id)privacyItemFromSpecifierDictionary:(id)arg1 ;
-(id)sliderItemFromSpecifierDictionary:(id)arg1 ;
-(TVSettingsPreferenceFacade *)preferenceFacade;
-(void)setPreferenceFacade:(TVSettingsPreferenceFacade *)arg1 ;
@end

