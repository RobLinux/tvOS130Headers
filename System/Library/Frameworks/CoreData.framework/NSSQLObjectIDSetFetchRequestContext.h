/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLFetchRequestContext.h>

@class NSArray, NSString;

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {

	NSArray* _idSets;
	NSString* _columnName;

}
-(void)dealloc;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)executeEpilogue;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5 ;
@end

