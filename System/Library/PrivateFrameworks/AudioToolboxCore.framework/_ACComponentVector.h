/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/NSSecureCoding.h>

@interface _ACComponentVector : NSObject <NSSecureCoding> {

	AudioComponentVector* mVector;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVector:(const AudioComponentVector*)arg1 ;
@end

