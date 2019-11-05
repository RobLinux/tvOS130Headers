/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSObject, NSMutableDictionary, NSMutableArray;

@interface DDMessageCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryWarningSource;
	NSMutableDictionary* _cache;
	NSMutableArray* _indexLRU;

}
-(id)init;
-(void)_pruneIgnoringFirst:(BOOL)arg1 ;
-(void)removeConversation:(id)arg1 ;
-(id)stringWithElement:(id)arg1 conversationID:(id)arg2 range:(NSRange*)arg3 ;
@end

