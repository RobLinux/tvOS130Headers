/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <cloudphotod/PQLInjecting.h>

@protocol PQLBindable;
@class NSData, NSString;

@interface _CPLPrequeliteHasCompletedGeneration : NSObject <PQLInjecting> {

	long long _generation;
	id<PQLBindable> _now;
	NSData* _sql;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql;                        //@synthesize sql=_sql - In the implementation block
-(NSData *)sql;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)bindValuesToKeepAlive;
-(id)initWithSQL:(id)arg1 generation:(long long)arg2 now:(id)arg3 ;
@end

