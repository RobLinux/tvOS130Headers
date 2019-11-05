/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/BSXPCCoding.h>
#import <SpringBoardServices/NSCopying.h>

@class NSString, SBSApplicationShortcutIcon, NSData, NSDictionary;

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	SBSApplicationShortcutIcon* _icon;
	unsigned long long _activationMode;
	NSString* _bundleIdentifierToLaunch;
	NSString* _targetContentIdentifier;
	NSData* _userInfoData;

}

@property (nonatomic,retain) NSData * userInfoData;                          //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) SBSApplicationShortcutIcon * icon;                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifierToLaunch;              //@synthesize bundleIdentifierToLaunch=_bundleIdentifierToLaunch - In the implementation block
@property (nonatomic,copy) NSString * targetContentIdentifier;               //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)targetContentIdentifier;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(SBSApplicationShortcutIcon *)icon;
-(NSData *)userInfoData;
-(unsigned long long)activationMode;
-(NSString *)bundleIdentifierToLaunch;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(void)setIcon:(SBSApplicationShortcutIcon *)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setBundleIdentifierToLaunch:(NSString *)arg1 ;
-(void)_localizeWithHandler:(/*^block*/id)arg1 ;
@end

