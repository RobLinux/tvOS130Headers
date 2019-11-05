/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKQuery;

@interface CPLCloudKitQueryOptions : NSObject {

	CKQuery* _query;
	long long _resultsLimit;

}

@property (nonatomic,readonly) CKQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long resultsLimit;              //@synthesize resultsLimit=_resultsLimit - In the implementation block
-(CKQuery *)query;
-(long long)resultsLimit;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 resultsLimit:(long long)arg3 ;
@end

