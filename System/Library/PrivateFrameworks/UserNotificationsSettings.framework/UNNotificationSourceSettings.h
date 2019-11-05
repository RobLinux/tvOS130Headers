/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <UserNotificationsSettings/NSCopying.h>
#import <UserNotificationsSettings/NSSecureCoding.h>

@class UNNotificationSettings, NSArray;

@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRestricted;
	UNNotificationSettings* _notificationSettings;
	NSArray* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationSettings * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topicSettings;                                    //@synthesize topicSettings=_topicSettings - In the implementation block
@property (nonatomic,readonly) BOOL isRestricted;                                               //@synthesize isRestricted=_isRestricted - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(UNNotificationSettings *)notificationSettings;
-(id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(BOOL)arg3 ;
-(NSArray *)topicSettings;
@end

