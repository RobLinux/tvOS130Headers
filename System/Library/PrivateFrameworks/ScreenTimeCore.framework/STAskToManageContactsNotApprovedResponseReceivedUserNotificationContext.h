/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskToManageContactsNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {

	NSString* _childName;

}

@property (nonatomic,copy) NSString * childName;              //@synthesize childName=_childName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)childName;
-(void)setChildName:(NSString *)arg1 ;
-(id)initWithChildName:(id)arg1 ;
@end

