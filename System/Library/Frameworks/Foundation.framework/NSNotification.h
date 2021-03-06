/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSCoding.h>

@class _MRNowPlayingPlayerPathProtobuf, NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (copy,readonly) NSString * name; 
@property (retain,readonly) id object; 
@property (copy,readonly) NSDictionary * userInfo; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
+(id)notificationWithName:(id)arg1 object:(id)arg2 ;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)object;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
@end

