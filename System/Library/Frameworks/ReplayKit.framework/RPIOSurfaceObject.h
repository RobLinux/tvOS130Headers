/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <ReplayKit/NSSecureCoding.h>

@interface RPIOSurfaceObject : NSObject <NSSecureCoding> {

	IOSurfaceRef _ioSurface;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IOSurfaceRef)ioSurface;
-(void)setIOSurface:(IOSurfaceRef)arg1 ;
@end

