//
//  GameLevelScene.h
//  Metroidvania
//


#import <SpriteKit/SpriteKit.h>
#import "TravelPortal.h"
#import "Player.h"
#import "JSTileMap.h"
#import "gameaudio.h"

@interface MySlider : UISlider
@end

@interface GameLevelScene : SKScene

@property (nonatomic,strong) Player *player;
@property (nonatomic,strong) JSTileMap *map;
@property (nonatomic,strong) TMXLayer *walls,*hazards,*mysteryboxes;
@property (nonatomic,assign) NSTimeInterval storetime,delta;
@property (nonatomic,assign) BOOL gameOver;
@property (nonatomic,strong) SKLabelNode *healthlabel;
@property (nonatomic,strong) SKSpriteNode *healthbar,*healthbarborder;
@property (nonatomic,strong) NSMutableArray *enemies,*bullets;
@property (nonatomic,assign) double healthbarsize;
@property (nonatomic,strong) TravelPortal * travelportal;
@property (nonatomic,assign) BOOL repeating;
@property (nonatomic,strong) SKSpriteNode *buttonup,*buttonright,*buttonleft,*startbutton;
@property (nonatomic,strong) gameaudio*audiomanager;
@property (nonatomic,strong) MySlider*volumeslider;
@property (nonatomic,strong) SKAction *buttonhighlight;
@property (nonatomic,strong) SKAction *buttonunhighlight;
@property (nonatomic,assign) BOOL stayPaused;

-(void)slideraction:(id)sender;
-(void)damageRecievedMsg;
-(void)enemyhitplayerdmgmsg:(int)hit;
-(void) gameOver:(BOOL)didwin;
-(void)replaybuttonpush:(id)sender;
-(void)continuebuttonpush:(id)sender;
-(void)setupVolumeSlider;
-(CGRect)tileRectFromTileCoords:(CGPoint)fnccoordinate;
-(NSInteger)tileGIDAtTileCoord:(CGPoint)tilecoordinate forLayer:(TMXLayer *)fnclayer;
-(void)hitHealthBox;

@end
