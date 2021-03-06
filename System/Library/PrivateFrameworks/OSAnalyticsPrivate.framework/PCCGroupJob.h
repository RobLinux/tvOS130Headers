/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAnalyticsPrivate/PCCJob.h>

@class NSMutableArray, NSDictionary, NSString;

@interface PCCGroupJob : PCCJob {

	NSMutableArray* _log_sets;
	NSDictionary* _content;
	NSString* _group_type;
	unsigned _total_count;
	unsigned _rejected_count;
	unsigned _success_count;
	unsigned _error_count;
	unsigned _consecutive_error_count;

}
-(id)description;
-(id)type;
-(id)result;
-(id)initWithID:(id)arg1 forTarget:(id)arg2 options:(id)arg3 ;
-(void)registerResult:(BOOL)arg1 error:(id)arg2 ;
-(void)prepareNext;
@end

