INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='admin'),'admin');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='admin'),'despachante');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='admin'),'regional');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='pedro'),'regional');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='pedro'),'despachante');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='tiago'),'regional');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='tiago'),'despachante');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='rafaela'),'regional');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='daniela'),'despachante');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='amanita'),'financeiro');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='anahelena'),'atendente');

INSERT INTO permissoes (id_usuario, funcionalidade) VALUES((SELECT id_usuario FROM usuarios WHERE nome='joao'),'pedreiro');