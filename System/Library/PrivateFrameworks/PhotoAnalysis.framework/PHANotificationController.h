/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGManager;

@interface PHANotificationController : NSObject {

	PGManager* _graphManager;

}
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)userIsActivelyUsingPhotos;
-(id)bestDateForDeliveringNotification;
-(BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg1 ;
-(void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2 ;
@end

