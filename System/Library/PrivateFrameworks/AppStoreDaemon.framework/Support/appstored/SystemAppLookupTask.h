/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class NSPredicate, NSArray;

@interface SystemAppLookupTask : Task {

	NSPredicate* _predicate;
	NSArray* _lookupResults;

}

@property (copy,readonly) NSArray * lookupResults;              //@synthesize lookupResults=_lookupResults - In the implementation block
+(id)lookupSystemApplicationsWithBundleIDs:(id)arg1 ;
+(id)lookupSystemApplicationWithBundleID:(id)arg1 ;
-(void)main;
-(id)initWithPredicate:(id)arg1 ;
-(NSArray *)lookupResults;
@end
