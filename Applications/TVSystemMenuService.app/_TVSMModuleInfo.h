/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:58:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSystemMenuService.app/TVSystemMenuService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemMenuService/TVSystemMenuService-Structs.h>
#import <TVSystemMenuService/NSCopying.h>

@class NSDictionary, NSURL;

@interface _TVSMModuleInfo : NSObject <NSCopying> {

	NSDictionary* _infoPlist;
	NSURL* _bundleURL;
	long long _type;

}

@property (nonatomic,readonly) NSDictionary * infoPlist;              //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
+(id)_defaultModuleDirectories;
+(id)allModuleInfos;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSURL *)bundleURL;
-(id)_initWithURL:(id)arg1 ;
-(NSDictionary *)infoPlist;
@end

