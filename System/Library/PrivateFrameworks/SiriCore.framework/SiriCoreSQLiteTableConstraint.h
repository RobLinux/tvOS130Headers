/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	NSArray* _columnNames;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
+(id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
+(id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSArray *)columnNames;
-(id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3 ;
@end

