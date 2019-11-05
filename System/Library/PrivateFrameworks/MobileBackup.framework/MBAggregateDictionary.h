/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface MBAggregateDictionary : NSObject {

	NSMutableDictionary* _scalars;

}

@property (nonatomic,readonly) NSDictionary * scalars; 
+(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
+(void)pushValue:(double)arg1 forDistributionKey:(id)arg2 ;
+(void)incrementScalarKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)save;
-(void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(NSDictionary *)scalars;
-(void)addCountAndSizeOfFile:(id)arg1 ;
-(void)addFileSize:(unsigned long long)arg1 containerID:(id)arg2 aggregateDictionaryGroup:(id)arg3 ;
@end

