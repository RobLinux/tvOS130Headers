/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PathEntry : NSObject {

	BOOL _recursive;
	NSString* _path;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL recursive;               //@synthesize recursive=_recursive - In the implementation block
+(id)bundlePathsWithinEntries:(id)arg1 withExtension:(id)arg2 andNames:(id)arg3 ;
+(id)entryWithPath:(id)arg1 ;
+(id)entryWithPath:(id)arg1 recursive:(BOOL)arg2 ;
+(id)bundlePathsWithinEntries:(id)arg1 ;
+(id)bundlePathsWithinEntries:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 recursive:(BOOL)arg2 ;
-(BOOL)recursive;
-(BOOL)isEqualToPathEntry:(id)arg1 ;
-(void)setRecursive:(BOOL)arg1 ;
@end
