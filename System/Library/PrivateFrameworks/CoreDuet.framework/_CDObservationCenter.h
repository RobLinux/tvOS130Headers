/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@interface _CDObservationCenter : NSObject {

	NSMapTable* _senderToNotificationObservers;
	NSMapTable* _senderToNotificationObserverObservers;

}
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 ;
-(NSMapTable*)_notificationToObserverEntriesForSender:(id)arg1 observerObserver:(BOOL)arg2 shouldCreate:(BOOL)arg3 ;
-(NSMapTable*)_observerToEntriesForSender:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3 shouldCreate:(BOOL)arg4 ;
-(unsigned long long)observerCountOnName:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4 ;
-(void)_removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 observerObserver:(BOOL)arg4 observerCounts:(id)arg5 ;
-(void)_postObserverChangesNotificationWithObserverCounts:(id)arg1 ;
-(void)_addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 observerObserver:(BOOL)arg5 usingCall:(id)arg6 ;
-(void)_removeObserver:(id)arg1 observerObserver:(BOOL)arg2 ;
-(void)_removeObserver:(id)arg1 name:(id)arg2 observerObserver:(BOOL)arg3 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5 ;
-(void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 ;
-(void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4 ;
-(void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2 ;
@end

