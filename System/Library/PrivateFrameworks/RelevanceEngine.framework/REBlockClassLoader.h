/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REClassLoader.h>

@interface REBlockClassLoader : REClassLoader {

	/*^block*/id _block;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 configuration:(id)arg2 ;
-(void)_enumerateClassesWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateBundleConfigurations:(/*^block*/id)arg1 ;
@end

