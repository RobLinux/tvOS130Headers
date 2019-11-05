/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <dmd/dmd-Structs.h>
@class CATOperationQueue, NSMutableArray, NSMutableDictionary;

@interface DMDUserNotificationController : NSObject {

	CATOperationQueue* _queue;
	NSMutableArray* _notifications;
	NSMutableDictionary* _completionsByIdentifier;

}

@property (nonatomic,readonly) CATOperationQueue * queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * notifications;                             //@synthesize notifications=_notifications - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * completionsByIdentifier;              //@synthesize completionsByIdentifier=_completionsByIdentifier - In the implementation block
+(id)sharedController;
-(CATOperationQueue *)queue;
-(id)initPrivate;
-(NSMutableArray *)notifications;
-(void)showNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)completionsByIdentifier;
-(void)_showNextNotification;
-(id)_dictFromNotification:(id)arg1 ;
-(void)_completeNotification:(id)arg1 response:(unsigned long long)arg2 ;
-(void)_notificationRef:(CFUserNotificationRef)arg1 wasDismissedWithFlags:(unsigned long long)arg2 ;
@end
