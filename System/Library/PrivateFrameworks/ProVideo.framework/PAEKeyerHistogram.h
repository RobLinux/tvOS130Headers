/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/NSCoding.h>

@interface PAEKeyerHistogram : NSObject <NSCoding> {

	ColorHisto* _histogram;

}
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(ColorHisto*)getHistogram;
-(void)setHistogramArray:(id)arg1 ;
@end
