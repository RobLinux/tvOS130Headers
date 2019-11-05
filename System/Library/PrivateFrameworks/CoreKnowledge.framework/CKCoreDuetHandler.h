/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKCoreDuetHandler : NSObject
+(id)duetKnowledgeStore;
+(void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllFromStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

