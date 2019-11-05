/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/NSCopying.h>
#import <ProVideo/NSSecureCoding.h>

@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding> {

	FigTime _time;

}
+(BOOL)supportsSecureCoding;
+(id)timeWithTime:(FigTime)arg1 ;
+(BOOL)classIsAbstract;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)getValue:(FigTime*)arg1 ;
-(FigTime)time;
-(void)setTime:(FigTime)arg1 ;
-(id)initWithFigTime:(FigTime)arg1 ;
-(long long)compareWithTime:(id)arg1 ;
@end

