/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <accessoryd/accessoryd-Structs.h>
@class NSString, NSURL, NSNumber, NSDictionary;

@interface ACCUserNotification : NSObject {

	BOOL _isModal;
	BOOL _dismissOnUnlock;
	BOOL _ignoreQuietMode;
	int _type;
	NSString* _uuid;
	NSString* _title;
	NSString* _message;
	NSString* _defaultButtonName;
	NSString* _otherButtonName;
	NSURL* _iconURL;
	NSNumber* _systemSoundID;
	double _timeout;
	NSString* _identifier;
	NSString* _groupIdentifier;
	NSDictionary* _userNotificationCFDict;
	CFUserNotificationRef _userNotificationCF;

}

@property (nonatomic,retain) NSDictionary * userNotificationCFDict;                 //@synthesize userNotificationCFDict=_userNotificationCFDict - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef userNotificationCF;              //@synthesize userNotificationCF=_userNotificationCF - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButtonName;                            //@synthesize defaultButtonName=_defaultButtonName - In the implementation block
@property (nonatomic,copy) NSString * otherButtonName;                              //@synthesize otherButtonName=_otherButtonName - In the implementation block
@property (nonatomic,copy) NSURL * iconURL;                                         //@synthesize iconURL=_iconURL - In the implementation block
@property (assign,nonatomic) BOOL isModal;                                          //@synthesize isModal=_isModal - In the implementation block
@property (assign,nonatomic) BOOL dismissOnUnlock;                                  //@synthesize dismissOnUnlock=_dismissOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL ignoreQuietMode;                                  //@synthesize ignoreQuietMode=_ignoreQuietMode - In the implementation block
@property (nonatomic,retain) NSNumber * systemSoundID;                              //@synthesize systemSoundID=_systemSoundID - In the implementation block
@property (assign,nonatomic) double timeout;                                        //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(id)init;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setTimeout:(double)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)timeout;
-(NSString *)uuid;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSURL *)iconURL;
-(NSNumber *)systemSoundID;
-(void)setSystemSoundID:(NSNumber *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
-(CFUserNotificationRef)userNotificationCF;
-(void)setUserNotificationCF:(CFUserNotificationRef)arg1 ;
-(BOOL)isModal;
-(NSString *)defaultButtonName;
-(NSString *)otherButtonName;
-(void)setUserNotificationCFDict:(NSDictionary *)arg1 ;
-(void)createBackingUserNotification;
-(void)setDefaultButtonName:(NSString *)arg1 ;
-(void)setOtherButtonName:(NSString *)arg1 ;
-(void)setIsModal:(BOOL)arg1 ;
-(BOOL)dismissOnUnlock;
-(void)setDismissOnUnlock:(BOOL)arg1 ;
-(BOOL)ignoreQuietMode;
-(void)setIgnoreQuietMode:(BOOL)arg1 ;
-(NSDictionary *)userNotificationCFDict;
@end

