/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HBItemOrderRule <NSObject>
@property (nonatomic,readonly) unsigned long long processingLimit; 
@optional
-(unsigned long long)processingLimit;

@required
-(BOOL)evaluateWithApplication:(id)arg1;
-(id)insertApplications:(id)arg1 into:(id)arg2;

@end

