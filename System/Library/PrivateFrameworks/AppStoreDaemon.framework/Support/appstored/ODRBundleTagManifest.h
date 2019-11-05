/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSArray;

@interface ODRBundleTagManifest : NSObject {

	NSDictionary* _dictionary;
	NSDate* _lastModified;

}

@property (nonatomic,readonly) NSDate * lastModified;              //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) NSArray * tags; 
+(id)_manifestWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)_manifestURLForProxy:(id)arg1 error:(id*)arg2 ;
+(id)_manifestWithData:(id)arg1 error:(id*)arg2 ;
+(id)_manifestWithDictionary:(id)arg1 error:(id*)arg2 ;
+(id)_manifestURLForBundle:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSArray *)tags;
-(NSDate *)lastModified;
-(id)initWithProxy:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundleID:(id)arg1 error:(id*)arg2 ;
-(id)assetPackIDsForTag:(id)arg1 ;
@end

