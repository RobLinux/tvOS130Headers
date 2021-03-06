/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _CPLCloudKitSimpleCacheEntry : NSObject {

	id _key;
	id _object;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) id key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) id object;                            //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)key;
-(id)object;
-(long long)compare:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpiredForNow:(id)arg1 withLeeway:(double)arg2 ;
-(id)initWithKey:(id)arg1 object:(id)arg2 expirationDate:(id)arg3 ;
@end

