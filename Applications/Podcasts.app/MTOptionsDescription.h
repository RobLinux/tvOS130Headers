/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet;

@interface MTOptionsDescription : NSObject {

	NSArray* _longTitles;
	NSArray* _shortTitles;
	NSOrderedSet* _valueSet;
	/*^block*/id _footerCallback;
	/*^block*/id _headerCallback;

}

@property (nonatomic,copy) NSArray * longTitles;                 //@synthesize longTitles=_longTitles - In the implementation block
@property (nonatomic,copy) NSArray * shortTitles;                //@synthesize shortTitles=_shortTitles - In the implementation block
@property (nonatomic,copy) NSOrderedSet * valueSet;              //@synthesize valueSet=_valueSet - In the implementation block
@property (nonatomic,copy) id footerCallback;                    //@synthesize footerCallback=_footerCallback - In the implementation block
@property (nonatomic,copy) id headerCallback;                    //@synthesize headerCallback=_headerCallback - In the implementation block
+(id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3 ;
+(id)optionsWithLongTitles:(id)arg1 shortTitles:(id)arg2 valueList:(id)arg3 footerTextCallback:(/*^block*/id)arg4 headerTextCallback:(/*^block*/id)arg5 ;
-(unsigned long long)valueForIndex:(unsigned long long)arg1 ;
-(NSOrderedSet *)valueSet;
-(void)setValueSet:(NSOrderedSet *)arg1 ;
-(NSArray *)longTitles;
-(id)footerCallback;
-(id)headerCallback;
-(unsigned long long)indexForValue:(unsigned long long)arg1 ;
-(void)setShortTitles:(NSArray *)arg1 ;
-(void)setLongTitles:(NSArray *)arg1 ;
-(void)setFooterCallback:(id)arg1 ;
-(void)setHeaderCallback:(id)arg1 ;
-(NSArray *)shortTitles;
@end

