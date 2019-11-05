/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _columns;
	NSArray* _constraints;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,copy,readonly) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)constraints;
-(NSArray *)columns;
-(id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3 ;
-(id)initWithName:(id)arg1 columnsProvider:(/*^block*/id)arg2 constraintsProvider:(/*^block*/id)arg3 ;
@end

