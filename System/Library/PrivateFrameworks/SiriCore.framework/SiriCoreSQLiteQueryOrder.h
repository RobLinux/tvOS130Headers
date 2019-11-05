/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/NSCopying.h>

@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying> {

	long long _mode;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) long long mode;                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mode;
-(NSArray *)columnNames;
-(id)initWithColumnNames:(id)arg1 mode:(long long)arg2 ;
@end
