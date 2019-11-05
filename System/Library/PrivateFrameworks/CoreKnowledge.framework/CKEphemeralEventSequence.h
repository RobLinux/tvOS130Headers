/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreKnowledge/CKEphemeralReadableEventSequence.h>
#import <CoreKnowledge/CKEphemeralWritableEventSequence.h>

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence> {

	 queue;

}
-(id)init;
-(id)first;
-(id)last;
-(id)eventsBetween:(id)arg1 and:(id)arg2 ;
-(id)eventsWithIdentifier:(id)arg1 ;
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)appendEvent:(id)arg1 ;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

